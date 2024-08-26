<template>
    <div>
        <img :src="src" alt="perfil">
        <MudarImagem @mudarImagem="trocarImagem"/>
    </div>
</template>

<script>
import MudarImagem from './MudarImagem.vue'

export default {
    name:'Picture',
    data() {
        return {
            src: '/imgs/avatar-default-icon.png'
        }
    },
    components: {
        MudarImagem
    },
    methods: {
        trocarImagem() {
            this.src = '/imgs/avatar-user-icon.png  '
        }
    }
}
</script>