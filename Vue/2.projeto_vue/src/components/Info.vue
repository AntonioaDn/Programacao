<template>
    <div>
        <p v-if="esta_trabalhando">Estou trabalhando no momento</p>
        <p v-else>Estou em busca de emprego</p>
        <p>Utilizo as seguintes tecnologias: </p>
        <ul>
            <li>HTML</li>
            <li>CSS</li>
            <li>Vue</li>
        </ul>
        <p v-show="mostrar_email">Mande um email para {{ email }}</p>
        <p>Para acessar meu portifólio <a v-bind:href="meu_link" target="_blank">clique aqui!</a></p>
    </div>
</template>

<script>
    export default {
        name: 'Info',
        data() {
            return {
                esta_trabalhando: true,
                mostrar_email: false,
                email: 'antonioadn18@gmail.com',
                meu_link: 'https://www.linkedin.com/in/antonio-dantas-74b420304/'
            }
        }
    }
</script>
