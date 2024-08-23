<template>
    <img v-bind:src="imagem" :alt="descricao">
</template>

<script>
    export default {
        name: 'Picture',
        data() {
            return {
                imagem: '/img/img1.png',
                descricao: 'Aula de estatística'
            }
        }
    }
</script>
