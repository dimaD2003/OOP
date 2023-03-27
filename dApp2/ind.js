//import { ethers } from "ethers";
const contractAddress = "0xE60418d4288a8E62FD1b17be26c7BCeE322d5B05"; 
const tokenAddress= "0xbd3D7Fe60760e5657079584609c8EF158D7ca11c";
const tokenAbi=[
	{
		"inputs": [
			{
				"internalType": "address",
				"name": "_to",
				"type": "address"
			},
			{
				"internalType": "uint256",
				"name": "amount",
				"type": "uint256"
			}
		],
		"name": "approve",
		"outputs": [],
		"stateMutability": "nonpayable",
		"type": "function"
	},
	{
		"inputs": [
			{
				"internalType": "address",
				"name": "_to",
				"type": "address"
			},
			{
				"internalType": "uint256",
				"name": "amount",
				"type": "uint256"
			}
		],
		"name": "transfer",
		"outputs": [],
		"stateMutability": "nonpayable",
		"type": "function"
	},
	{
		"inputs": [
			{
				"internalType": "address",
				"name": "_from",
				"type": "address"
			},
			{
				"internalType": "address",
				"name": "_to",
				"type": "address"
			},
			{
				"internalType": "uint256",
				"name": "amount",
				"type": "uint256"
			}
		],
		"name": "transferFrom",
		"outputs": [],
		"stateMutability": "nonpayable",
		"type": "function"
	},
	{
		"inputs": [
			{
				"internalType": "string",
				"name": "_name",
				"type": "string"
			},
			{
				"internalType": "string",
				"name": "_symb",
				"type": "string"
			}
		],
		"stateMutability": "nonpayable",
		"type": "constructor"
	},
	{
		"inputs": [
			{
				"internalType": "address",
				"name": "",
				"type": "address"
			},
			{
				"internalType": "address",
				"name": "",
				"type": "address"
			}
		],
		"name": "allowance",
		"outputs": [
			{
				"internalType": "uint256",
				"name": "",
				"type": "uint256"
			}
		],
		"stateMutability": "view",
		"type": "function"
	},
	{
		"inputs": [
			{
				"internalType": "address",
				"name": "",
				"type": "address"
			}
		],
		"name": "balance",
		"outputs": [
			{
				"internalType": "uint256",
				"name": "",
				"type": "uint256"
			}
		],
		"stateMutability": "view",
		"type": "function"
	},
	{
		"inputs": [],
		"name": "name",
		"outputs": [
			{
				"internalType": "string",
				"name": "",
				"type": "string"
			}
		],
		"stateMutability": "view",
		"type": "function"
	},
	{
		"inputs": [],
		"name": "symb",
		"outputs": [
			{
				"internalType": "string",
				"name": "",
				"type": "string"
			}
		],
		"stateMutability": "view",
		"type": "function"
	},
	{
		"inputs": [],
		"name": "totalSyply",
		"outputs": [
			{
				"internalType": "uint256",
				"name": "",
				"type": "uint256"
			}
		],
		"stateMutability": "view",
		"type": "function"
	}
]

const abi=[
	{
		"inputs": [
			{
				"internalType": "contract IToken",
				"name": "_token",
				"type": "address"
			},
			{
				"internalType": "address[]",
				"name": "_addressArray",
				"type": "address[]"
			},
			{
				"internalType": "uint256[]",
				"name": "_amountArray",
				"type": "uint256[]"
			}
		],
		"name": "airdropWithTransfer",
		"outputs": [],
		"stateMutability": "nonpayable",
		"type": "function"
	},
	{
		"inputs": [
			{
				"internalType": "contract IToken",
				"name": "_token",
				"type": "address"
			},
			{
				"internalType": "address[]",
				"name": "_addressArray",
				"type": "address[]"
			},
			{
				"internalType": "uint256[]",
				"name": "_amountArray",
				"type": "uint256[]"
			}
		],
		"name": "airdropWithTransferFrom",
		"outputs": [],
		"stateMutability": "nonpayable",
		"type": "function"
	}
]

const provider = new ethers.providers.Web3Provider(window.ethereum, 97)

let signer;
let contract;
provider.send("eth_requestAccounts", []).then(() => {
    provider.listAccounts().then((accounts) => {
      signer = provider.getSigner(accounts[0]);

      contract = new ethers.Contract(contractAddress, abi, signer);
      console.log(signer);

    });
});



//const FakeTok = new web3.eth.Contract(tokenAbi, tokenAddress);
//const FakeTokenAddress = FakeTok.options.address;





//===============================================//
const countRecipients= document.getElementById("countRecipient");
const DivAllinput=document.querySelector('.inputs-adr-amount-btn')
const btnCount= document.querySelector('.btn-count')
const contant= document.querySelector('.contant')


  function AddInput (count) {

    let inputs = document.querySelectorAll('.input-adr-amoun-btn');
    inputs.forEach(item => {
        item.remove()
        
    });
  
    for(let i= count; i>0; i--){
   
        let newElem=` <div class="input-adr-amoun-btn ">
        <input type="text" data-text= ${i}>
        <input type="number" data-num= ${i}> 
        ` ;

        DivAllinput.insertAdjacentHTML("afterend", newElem);
    
} }

btnCount.addEventListener('click', function() {
	
	if(countRecipients.value!=0){

		AddInput(countRecipients.value);
    let btn = document.querySelectorAll('.btn-send');
    btn.forEach(item => {
        item.remove()
        
    });
    contant.insertAdjacentHTML("beforeend", `<button class="btn-send" onclick="airdropWithTransfer()" > send</button></div>`)
	}else{
		alert("input count of recipients")
	}
     }

);


function addresInMas () {
    let inputAddress = document.querySelectorAll('input[data-text]');
    //[..., ... , .... ,  ]
    let masAddress = [];
    
    for(let i=0; i<inputAddress.length; i++){
        masAddress.push(inputAddress[i].value)
    }
    return masAddress
  
// return [0x26b.... , 0xxwd6q... ,  ]
  }

  function amountInMas () {
    let inputAmount = document.querySelectorAll('input[data-num]');
   
    let masAmount = [];
    
    for(let i=0; i<inputAmount.length; i++){
        masAmount.push(inputAmount[i].value)
    }
  // return [10, 20 , .. ]
  return masAmount
  }


//===============================================//
async function airdropWithTransfer() {
    const FakeTok = new ethers.Contract(tokenAddress, tokenAbi, provider); // создаем экземпляр контракта
const FakeTokenAddress = await FakeTok.address;
    let addressArray= []
    let amountArray=[]
    addressArray=addresInMas()
    amountArray =amountInMas()
	if(addressArray!=0 && amountArray!=0 && (addressArray.length=== amountArray.length) ){
 		const airdropWithTransfer = await contract.airdropWithTransfer(FakeTokenAddress, addressArray, amountArray);

	}else[
		alert("error in quantity")
	]
   
  }

//0x205c657a1dd882f4d9D12E5CD388102D4cF46733 - 1\
//0xcbF2539da7C83f4Dec97C53a954Faa0FE6165A3A  -3
//https://testnet.bscscan.com/tx/0x7d48c3fa0308988383b8682bb505eae2b7040f53e890510fd598412cca4b9938