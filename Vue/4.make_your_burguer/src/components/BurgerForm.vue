<template>
    <div>
        <p>Componente de mensagem</p>
        <div>
            <form id="burger-form">
                <div class="input-container">
                    <label for="nome">Nome do cliente:</label>
                    <input type="text" id="nome" name="nome" v-model="nome" placeholder="Digite o seu nome:">
                </div>
                <div class="input-container">
                    <label for="pao">Escolha o pão:</label>
                    <select name="pao" id="pao" v-model="pao">
                        <option value="">Escolha seu pão</option>
                        <option value="Integral">Integral</option>
                    </select>
                </div>
                <div class="input-container">
                    <label for="carne">Escolha a carne:</label>
                    <select name="carne" id="carne" v-model="carne">
                        <option value="">Escolha sua carne</option>
                        <option value="Picanha">Picanha</option>
                    </select>
                </div>
                <div class="input-container">
                    <label id="opcionais-title" for="opcionais">Selecione os opcionais:</label>
                    <div class="checkbox-container">
                            <input type="checkbox" name="opcionais" id="CarneExtra">
                            <span>Blend de carne extra</span>
                    </div>
                </div>
                <div class="input-container">
                    <input type="submit" class="submit-btn" value="Crie seu Burger!">
                </div>
            </form>
        </div>
    </div>
</template>
    
<script>
export default {
    name: 'BurgerForm'
}
</script>

<style scoped>
    #burger-form {
        max-width: 400px;
        margin: 0 auto;
    }
    .input-container {
        display: flex;
        flex-direction: column;
        margin-bottom: 20px;
    }
    label {
        margin-bottom: 15px;
        border-left: 4px solid #fcba03;
        padding: 5px 10px;font-size: 16px;
        cursor: pointer;
        transition: .5s;
        font-weight: bold;
        color: #222;
    }
    input, select {
        padding: 5px 10px;
        width: 300px;
    }
    #opcionais-container {
        flex-direction: row;
        flex-wrap: wrap;
    }
    #opcionais-title {
        width: 100%;
    }
    .checkbox-container {
        display: flex;
        align-items: flex-start;
        width: 50%;
        margin-bottom: 20px;

    }
    .checkbox-container span,
    .checkbox-container input {
        width: auto;
    }
    .checkbox-container span {
        margin-left: 6px;
        font-weight: bold;
    }
    .submit-btn {
        background-color: #222;
        color: #fcba03;
        font-size: 16px;
        font-weight: bold;
        margin: 0 auto;
        cursor: pointer;
        transition: .5s;
    }
    .submit-btn:hover {
        background-color: transparent;
        color: #222;
    }

</style>