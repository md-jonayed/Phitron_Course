// alert("HI I am Jo");

function handleDeposit() {
    var inputValue = document.getElementById("depositInput").value;
    // console.log(inputValue);
    inputValue = parseFloat(inputValue);
    var depositAmount = document.getElementById("depositAmount").innerText;
    // console.log(depositAmount);
    depositAmount = parseFloat(depositAmount);
    // console.log(inputValue + depositAmount);
    var sum = inputValue + depositAmount;
    // document.getElementById("depositAmount").innerText = sum;
    setInnerText("depositAmount",sum)
    document.getElementById("depositInput").value = "";
    // setInnerText("depositInput", 0);
    var totalAmount = document.getElementById("totalAmount").innerText;
    totalAmount = parseFloat(totalAmount);
    // document.getElementById("totalAmount").innerText = (totalAmount + inputValue);
    setInnerText("totalAmount",(totalAmount + inputValue))
    
}

function withdrawHandle() {
    // console.log("withdrawn");
    var inputValue = document.getElementById("withdrawInputAmountId").value;
    // console.log(inputValue);
    var withdrawnAmount = document.getElementById("withdrawAmountId").innerText;
    // console.log(withdrawnAmount);
    inputValue = parseFloat(inputValue);
    withdrawnAmount = parseFloat(withdrawnAmount);
    var sub = inputValue + withdrawnAmount;
    // document.getElementById("withdrawAmountId").innerText = sub;
    setInnerText("withdrawAmountId", sub);
    document.getElementById("withdrawInputAmountId").value = "";
    var totalAmount = document.getElementById("totalAmount").innerText;
    totalAmount = parseFloat(totalAmount);
    // document.getElementById("totalAmount").innerText = (totalAmount - inputValue);
    setInnerText("totalAmount", (totalAmount - inputValue));
    
}

function setInnerText(id, value) {
    document.getElementById(id).innerText = value;
}