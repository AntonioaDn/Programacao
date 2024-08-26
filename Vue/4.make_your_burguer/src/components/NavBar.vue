<template>
    <nav>
        <router-link to="/">
            <img  :src="logo" :alt="alt" id="logo">
        </router-link>
        <router-link to="/">Home</router-link> |
        <router-link to="/pedidos">Pedidos</router-link>
    </nav>
</template>

<script>
export default {
    name:'NavBar',
    props: ["logo", "alt"]
}
</script>

<style scoped>
    nav {
        background-color: antiquewhite;
        display: flex;
        justify-content: space-between;
        margin: 0;
        padding: 0;
    }
    #logo {
        width: 25px;
    }
</style>