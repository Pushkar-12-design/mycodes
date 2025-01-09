
const isEligibleToVote = (age) => {
    return age >= 18; 
};


const displayVotingEligibility = (name, age) => {
    const eligibility = isEligibleToVote(age);
    return `${name} is ${eligibility ? 'eligible' : 'not eligible'} to vote.`;
};

// Example usage
const person1 = { name: "Alice", age: 20 };
const person2 = { name: "Bob", age: 16 };

console.log(displayVotingEligibility(person1.name, person1.age));
console.log(displayVotingEligibility(person2.name, person2.age));
