//Declarar Var
var mediaharmonica ;


function mostrar () {
    //Atribuir nome do aluno
    var nome = document.getElementById('nome');
    //ler nome
    console.log(nome.value);
    //Atribuir notas
    var nota01 = document.getElementById('nota01').value
    var nota02 = document.getElementById('nota02').value
    var nota03 = document.getElementById('nota03').value
    //Calcular média harmônica
    mediaharmonica = 3/(1/nota01)+(1/nota02)+(1/nota03)
    //Mostrar resultado
    console.log(mediaharmonica)
    alert(mediaharmonica)

}

