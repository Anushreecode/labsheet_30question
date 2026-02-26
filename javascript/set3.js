function checkPrimeOrComposite(num) {
    // Handle special cases
    if (num <= 1) {
        return "Neither prime nor composite";
    }

    // Check for factors from 2 to square root of num
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) {
            return "Composite";
        }
    }

    return "Prime";
}

// Example usage
let number = 29;
console.log(`${number} is ${checkPrimeOrComposite(number)}`);
