<template>
  <NavBar :logo="logo_src" :alt="app_name"/>
  <router-view/>
  <Footer/>
</template>

<script>
import NavBar from './components/NavBar.vue'
import Footer from './components/Footer.vue'

export default {
  name:'App',
  components: {
    NavBar,
    Footer
  },
  data() {
    return {
      logo_src:'img/logo.png',
      app_name: 'Make your burguer'
    }
  }
}
</script>

<style>
</style>
