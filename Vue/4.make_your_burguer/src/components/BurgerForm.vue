<template>
    <div>
        <p>Componente de mensagem</p>
        <div>
            <form id="burger-form" @submit="CreateBurger($event)">
                <div class="input-container">
                    <label for="nome">Nome do cliente:</label>
                    <input type="text" id="nome" name="nome" v-model="nome" placeholder="Digite o seu nome:">
                </div>
                <div class="input-container">
                    <label for="pao">Escolha o pão:</label>
                    <select name="pao" id="pao" v-model="pao">
                        <option value="esp">Escolha seu pão</option>
                        <option v-for="pao in paes" :key="pao.id" :value="pao.tipo">
                            {{ pao.tipo }}
                        </option>
                    </select>
                </div>
                <div class="input-container">
                    <label for="carne">Escolha a carne:</label>
                    <select name="carne" id="carne" v-model="carne">
                        <option value="">Escolha sua carne</option>
                        <option v-for="carne in carnes" :key="carne.id" :value="carne.tipo">
                            {{ carne.tipo }}
                        </option>
                    </select>
                </div>
                <div id="opcionais-container" class="input-container">
                    <label id="opcionais-title" for="opcionais">Selecione os opcionais:</label>
                    <div class="checkbox-container" v-for="opcional in opcionaisdata" :key="opcional.id">
                        <input type="checkbox" name="opcionais" v-model="opcionais" :value="opcional.tipo">
                        <span>{{ opcional.tipo }}</span>
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
    name: 'BurgerForm',
    data() {
        return {
            carnes: null,
            paes:null,
            opcionaisdata: null,
            nome: null,
            carne: null,
            pao: null,
            status: 'Solicitado',
            opcionais: [],
            msg: null
        }
    },
    methods: {
        async getIngredientes() {
            const req = await fetch("http://localhost:3000/ingredientes")
            const data = await req.json()

            this.paes = data.paes
            this.carnes = data.carnes
            this.opcionaisdata = data.opcionais
        },
        async CreateBurger(e) {
            e.preventDefault()

            console.log("enviou")
        }
    },
    mounted() {
        this.getIngredientes()
    }
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
        align-content: flex-start;
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