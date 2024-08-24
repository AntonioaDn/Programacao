<template>
    <ul>
        <li><a href="#">Home</a></li>
        <li><a href="#">Projetos</a></li>
        <li><a href="#">Contatos</a></li>
    </ul>
</template>

<script>
export default {
    name: 'Header'
}
</script>

<style scoped>
    ul {
        list-style: none;
        display: flex;
        justify-content: space-evenly;
    }
    a {
        text-decoration: none;
        color: white;
        transition: 0.5s;
    }
    a:hover {
        color: salmon;
    }
</style>