import java.sql.*;
import java.util.Scanner;

public class bank {
   public static void main(String[] args) {
      Connection conn = null;
      PreparedStatement pstmt = null;
      Statement stmt = null;
      ResultSet rs = null;

      String url = "jdbc:oracle:thin:@//PUSHKAR_PC:1521/freepdb1";
      String user = "Pushkar";
      String password = "Pushkar1234";
      String queryString = null;

      try {
         conn = DriverManager.getConnection(url, user, password);
         stmt = conn.createStatement();
         Scanner sc = new Scanner(System.in);

         System.out.println("Connected to Oracle DB!");
         int choice;

         do {
            System.out.println("\n--- Bank Menu ---");
            System.out.println("1. Show customers");
            System.out.println("2. Add customer");
            System.out.println("3. Delete customer");
            System.out.println("4. Update customer");
            System.out.println("5. Show account details");
            System.out.println("6. Show loan details");
            System.out.println("7. Deposit money");
            System.out.println("8. Withdraw money");
            System.out.println("9. Exit");
            System.out.print("Enter choice: ");
            choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {
               case 1:
                  queryString = "SELECT * FROM customer";
                  rs = stmt.executeQuery(queryString);
                  System.out.printf("\n%-5s | %-20s | %-10s | %-10s%n", "ID", "Name", "Phone", "City");
                  System.out.println("------------------------------------------------------");
                  while (rs.next()) {
                     System.out.printf("%-5s | %-20s | %-10s | %-10s%n",
                        rs.getString("cust_no"),
                        rs.getString("name"),
                        rs.getString("phone_no"),
                        rs.getString("city"));
                  }
                  break;

               case 2:
                  System.out.print("Enter customer no: ");
                  String cust_no = sc.nextLine();
                  System.out.print("Enter customer name: ");
                  String name = sc.nextLine();
                  System.out.print("Enter phone number: ");
                  long phone_no = sc.nextLong();
                  sc.nextLine();
                  System.out.print("Enter city: ");
                  String city = sc.nextLine();

                  queryString = "INSERT INTO customer (cust_no, name, phone_no, city) VALUES (?, ?, ?, ?)";
                  pstmt = conn.prepareStatement(queryString);
                  pstmt.setString(1, cust_no);
                  pstmt.setString(2, name);
                  pstmt.setLong(3, phone_no);
                  pstmt.setString(4, city);

                  int rowsInserted = pstmt.executeUpdate();
                  if (rowsInserted > 0)
                     System.out.println("Customer added successfully.");
                  break;

               case 3:
                  System.out.print("Enter cutomer no: ");
                  cust_no = sc.nextLine();

                  queryString = "DELETE FROM customer WHERE cust_no = '"+cust_no+"'";
                  int rows = stmt.executeUpdate(queryString);
                  if (rows == 0)
                     System.out.println("Customer not found!");
                  else
                     System.out.println("Customer deleted.");
                  break;

               case 4:
                  System.out.print("Enter customer no: ");
                  String cust_no_u = sc.nextLine();
                  System.out.print("Enter 1: For Name\t2: For Phone no\t3: For City: ");
                  int update_choice = sc.nextInt();
                  sc.nextLine();
                  int rows_updated = 0;
                  
                  switch(update_choice) {
                     case 1:
                        queryString = "UPDATE customer set name = ? where cust_no = ?";
                        System.out.print("Enter new name: ");
                        String updated_name = sc.nextLine();
                        pstmt = conn.prepareStatement(queryString);
                        pstmt.setString(1, updated_name);
                        pstmt.setString(2, cust_no_u);
                        rows_updated = pstmt.executeUpdate();
                        break;
                     case 2:
                        queryString = "UPDATE customer set phone_no = ? where cust_no = ?";
                        System.out.print("Enter new phone no: ");
                        Long updated_phone_no = sc.nextLong();
                        pstmt = conn.prepareStatement(queryString);
                        pstmt.setLong(1, updated_phone_no);
                        pstmt.setString(2, cust_no_u);
                        rows_updated = pstmt.executeUpdate();
                        break;
                     case 3:
                        queryString = "UPDATE customer set city = ? where cust_no = ?";
                        System.out.print("Enter new city: ");
                        String updated_city = sc.nextLine();
                        pstmt = conn.prepareStatement(queryString);
                        pstmt.setString(1, updated_city);
                        pstmt.setString(2, cust_no_u);
                        rows_updated = pstmt.executeUpdate();
                        break;
                     default:
                        System.out.println("Invalid update choice!");
                  }
                  if (rows_updated == 0)
                     System.out.println("Customer not found!");
                  else
                     System.out.println("Customer updated.");
                  break;

               case 5:
                  System.out.print("Enter cutomer no: ");
                  cust_no = sc.nextLine();

                  queryString = "SELECT A.ACCOUNT_NO, A.TYPE, A.BALANCE, B.* FROM account A, branch B, customer C, depositor D WHERE D.ACCOUNT_NO = A.ACCOUNT_NO AND  A.BRANCH_CODE = B.BRANCH_CODE AND C.CUST_NO = D.CUST_NO AND C.CUST_NO = '"+cust_no+"'";
                  
                  rs = stmt.executeQuery(queryString);
                  if (!rs.next())
                     System.out.println("Account details not found!");
                  else { 
                     System.out.format("Acc. No.: \tType: \tBalance: \tBranch Code: \tBranch Name: \t\tBranch City:\n"); 
                     do {
                        String account_no = rs.getString("ACCOUNT_NO");
                        String type = rs.getString("TYPE");
                        Long balance = rs.getLong("BALANCE");
                        String branch_code = rs.getString("BRANCH_CODE");
                        String branch_name = rs.getString("BRANCH_NAME");
                        String branch_city = rs.getString("BRANCH_CITY");
                     
                        System.out.format("%s \t\t%s \t %d\t\t %s\t\t %s\t %s\t\n", account_no, type, balance, branch_code, branch_name, branch_city);
                     } while(rs.next()); 
                  }
                  break;
               
               case 6:
                  System.out.print("Enter customer no: ");
                  cust_no = sc.nextLine();

                  queryString = "SELECT C.*, L.LOAN_NO, L.AMOUNT, B.* FROM loan L, customer C, branch B WHERE L.BRANCH_CODE = B.BRANCH_CODE AND C.CUST_NO = L.CUST_NO AND C.CUST_NO = '"+cust_no+"'";
                  rs = stmt.executeQuery(queryString);
                  if (!rs.next()) {
                     System.out.println("Loan details not found!");
                  } else {
                        System.out.format("Loan No.:\tCust No.:\tName:\t\tPhone:\t\tCity:\t\tAmount:\t\tBranch Code\tBranch Name\tBranch City\n");
                        do {
                           String ccust = rs.getString("CUST_NO");
                           String cname = rs.getString("NAME");
                           Long cphone = rs.getLong("PHONE_NO");
                           String ccity = rs.getString("CITY");
                           String loan_no = rs.getString("LOAN_NO");
                           Long amount = rs.getLong("AMOUNT");
                           String branch_code = rs.getString("BRANCH_CODE");
                           String branch_name = rs.getString("BRANCH_NAME");
                           String branch_city = rs.getString("BRANCH_CITY");
                  
                           System.out.format("%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10d\t%-12s\t%-12s\t%-12s\n",
                              loan_no, ccust, cname, cphone, ccity, amount, branch_code, branch_name, branch_city);
                  
                        } while (rs.next());
                  }
                  break;
               case 7:
                  System.out.print("Enter Account No: ");
                  String acc_no = sc.nextLine();
                  System.out.print("Enter the amount to deposite: ");
                  long amt = sc.nextLong();

                  queryString = "UPDATE ACCOUNT set BALANCE = BALANCE +" + amt + "where ACCOUNT_NO = '"+acc_no+"'";
                  rows = stmt.executeUpdate(queryString);
                  if (rows == 0)
                     System.out.println("Account not found!");
                  else
                     System.out.println("Added amount "+amt+".");
                  break;
               case 8:
                  System.out.print("Enter Account No: "); 
                  acc_no = sc.nextLine(); 
                  System.out.print("Enter the amount to withdraw: "); 
                  amt = sc.nextLong(); 

                  queryString = "SELECT BALANCE from ACCOUNT where ACCOUNT_No = '" + acc_no +"'"; 
                  rs = stmt.executeQuery(queryString);
                  if (!rs.next())
                     System.out.println("Account not found!");
                  else {
                     long bal = rs.getInt(1);
                     if(amt <= bal) {
                        queryString = "UPDATE ACCOUNT set BALANCE = BALANCE -" + amt + "where ACCOUNT_NO = '"+acc_no+"'"; 
                        rows = stmt.executeUpdate(queryString);
                        if (rows == 0)
                           System.out.println("Account not found!");
                        else
                           System.out.println("Withdrawn amount "+amt); 
                     } else
                        System.out.println("Insuffient balance!");
                  }
                  break;

               case 9:
                  conn.close();
                  System.out.println("Bank closed!");
                  System.exit(0);
                  break;

               default:
                  System.out.println("Invalid choice!");
            }

         } while (choice != 9);
         sc.close();

      } catch (SQLException e) {
         System.err.println("SQL Error: " + e.getMessage());
      }
   }
}
