<template>
    <div>
        <p> {{ email }} </p>
        <p v-if="trabalhando">Atualmente estou trabalhando</p>
        <p v-else>Atualmente estou buscando emprego</p>
        <p>Tecnologias usadas no backend:</p>
        <ul>
            <li v-for="(tecnologia, index) in backend_tecnologias" :key="index">
                {{ tecnologia }}
            </li>
        </ul>
        <p>Tecnologias usadas no frontend:</p>
        <ul>
            <li v-for="tecnologia in frontend_tecnologias" :key="tecnologia.id">
                {{ tecnologia.l }}
            </li>
        </ul>
        <Picture/>
    </div>
</template>

<script>
import Picture from './Picture.vue'

export default {
    name: 'Info',
    data() {
        return {
            trabalhando: false,
            backend_tecnologias: ['PHP', 'Java', 'Python'],
            frontend_tecnologias: [
                {id: 1, l:'HTML'},
                {id: 2, l:'CSS'},
                {id: 3, l:'Vue'}
            ]
        }
    },
    components: {
        Picture
    },
    props: {
        email: String
    }
}
</script>