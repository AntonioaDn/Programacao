<template>
  <div>
    <Header :esta_logado="esta_logado"/>
    <Pessoa/>
    <Form/>
    <PrimeiroComponente/>
  </div>
</template>

<script>
import Pessoa from './components/Pessoa.vue'
import Form from './components/Form.vue'
import PrimeiroComponente from './components/PrimeiroComponente.vue'
import Header from './components/Header.vue'

export default {
  name: 'App',
  components: {
    Pessoa,
    Form,
    PrimeiroComponente,
    Header
  },
  data() {
    return {
      esta_logado: true
    }
  },
  methods() {

  }
}
</script>