<template>
    <div>
        <p v-if="esta_trabalhando">Estou trabalhando no momento</p>
        <p v-else>Estou em busca de emprego</p>
        <p>Utilizo as seguintes tecnologias para back-end: </p>
        <ul>
            <li v-for="(technology, index) in backend_technologies" v-bind:key="index">{{ technology }}</li>
        </ul>
        <p>Utilizo as seguintes tecnologias para front-end:</p>
        <ul>
            <li v-for="technology in frontend_technologies" :key="technology.id">
                {{ technology.language }}
            </li>
        </ul>
        <p v-show="mostrar_email">Mande um email para {{ email }}</p>
        <p>Para acessar meu portifólio <a v-bind:href="meu_link" target="_blank">clique aqui!</a></p>
        <div>
            <button @click="showEmail">{{texto_botao}}</button>
        </div>
    </div>
</template>

<script>
    import Picture from './Picture.vue'
    export default {
        name: 'Info',
        components: {
            Picture
        },
        data() {
            return {
                esta_trabalhando: true,
                mostrar_email: false,
                email: 'antonioadn18@gmail.com',
                meu_link: 'https://www.linkedin.com/in/antonio-dantas-74b420304/',
                texto_botao: 'Mostrar email',
                backend_technologies:  ['Javascript', 'PHP', 'Python'],
                frontend_technologies: [
                    {id: 1, language: 'HTML'},
                    {id: 2, language: 'CSS'},
                    {id: 3, language: 'TailWind'}
                ]
            }
        },
        methods: {
            showEmail() {
                this.mostrar_email = !this.mostrar_email  
                if (!this.mostrar_email) {
                    this.texto_botao = "Mostrar email"
                } else {
                    this.texto_botao = "Esconder email"
                }
            }
        }
    }
</script>
