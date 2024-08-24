<template>
    <div>
        <h2>Meu formulário: </h2>
        <form action="" @submit="enviarFormulario($event)">
            <InputText/>
            <br>
            <InputText/>
            <br>
            <Submit/>
        </form>
        <!-- <p>Conteúdo</p>
        <p>Conteúdo</p>
        <p>Conteúdo</p> -->
    </div>
</template>

<script>
import InputText from './form/InputText.vue'
import Submit from './form/Submit.vue'

export default {
    name:'Form',
    components: {
        InputText,
        Submit
    },
    methods: {
        enviarFormulario(e) {
            e.preventDefault()

            alert('Formulário enviado')
        }
    }
}
</script>

<style scoped>
    p {
        margin: 150px;
    }
</style>