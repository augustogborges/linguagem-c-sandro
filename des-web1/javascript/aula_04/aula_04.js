const pessoa = [
    {
        nome: "Rafael",
        idade: 35,
        email: ["rafaelmarinho@unipam.edu.br", "augusto.guimaraesb123@gmail.com"],
    },

    {
        nome: "Augusto",
        idade: 18,
        email: ["augusto.guimaraesb123@gmail.com"],
    }
]


console.log(`Nome: ${pessoa[0].nome}`);
console.log(`Idade: ${pessoa[0].idade}`);
console.log(`Email: ${pessoa.email[0]}`);
