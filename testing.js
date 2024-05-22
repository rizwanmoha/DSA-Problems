const arraySize = 5;
const inputArray = [];

for (let i = 0; i < arraySize; i++) {
  const elementValue = prompt("Enter element " + (i + 1) + ":");
  inputArray.push(elementValue);
}
console.log(arraySize);