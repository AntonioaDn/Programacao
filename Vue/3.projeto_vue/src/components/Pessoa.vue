<template>
    <div>
        <p>
            Essa é a descrição de: 
            <span>
                {{ nome_atual }}
            </span>
        </p>
        <Info :email="email"/>
    </div>
</template>

<script>
import Info from './Info.vue'

export default {
    name: 'Pessoa',
    components: {
        Info
    },
    data() {
        return {
            nome: ['Antônio', 'Pedro', 'Renata', 'Teone'],
            nome_atual: 'Não sei',
            email: 'antonioadn18@gmail.com',
        }
    },
    created() {
        setTimeout(() => {
            this.nome_atual = this.nome[0]
        }, 1500)
    },
    mounted() {
        setTimeout(() => {
            this.nome_atual = this.nome[1]
        }, 3000)
    },
    methods: {
        mudar_nome(i) {
            i = (i+1)%4
            this.nome_atual = this.nome[i]
        }
    }
}
</script>