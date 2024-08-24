<template>
    <div>
        <button @click="primeiro($event), segundo($event), terceiro($event )">Ativar múltiplos eventos</button>
        <p>{{ multiplos_eventos }} </p>
    </div>
</template>

<script>
export default {
    name:'MultiplosEventos',
    data() {
        return {
            multiplos_eventos: ''
        }
    },
    methods: {
        primeiro(e) {
            this.multiplos_eventos = 'Primeiro evento acionado.'
        },
        segundo(e) {
            setTimeout(() => {
                this.multiplos_eventos = 'Segundo evento acionado.'
            }, 1500)
        },
        terceiro(e) {
            setTimeout(() => {
                this.multiplos_eventos = ''
            }, 3000) 
        }
    }
}
</script>

<style scoped>
    div {
        margin: 150px;
    }
</style>