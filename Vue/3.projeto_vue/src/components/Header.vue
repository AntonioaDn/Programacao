<template>
    <ul>
        <li><a href="#">Home</a></li>
        <li><a href="#">Sobre</a></li>
        <li><a href="#">Contatos</a></li>
        <li v-show="esta_logado"><a href="#">Meu Perfil</a></li>
    </ul>
</template>

<script>
export default {
    name:'Header',
    data() {
        return {
            
        }
    },
    props: {
        esta_logado: Boolean
    }
}
</script>

<style scoped>
    ul {
        padding: 0;
        margin: 0;
        display: flex;
        justify-content: space-evenly;
    }
    li {
        list-style: none;
    }
    a {
        text-decoration: none;
        color: black;
        transition: 0.5s;
    }
    a:hover {
        color: salmon;
    }
</style>