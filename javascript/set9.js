numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

function gretest() {
    let gretest = numbers[0]
    for (let index = 1; index < numbers.length; index++) {
        if (gretest < numbers[index]) {
            gretest = numbers[index]
        }
    }
    return gretest
}

// function lowest() {

// }

console.log(gretest())