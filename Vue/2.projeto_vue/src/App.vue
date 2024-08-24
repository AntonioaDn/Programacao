<template>
	<div>
		<!-- <PrimeiroComponente/> -->
		<!-- <p>O valor de testando é {{ testando }}</p> -->
		<!-- <Pessoa/> -->
		<Header/>	
		<Info/>
	</div>
</template>

<script>
	import Header from './components/Header.vue'
	import Form from './components/Form.vue'
	import PrimeiroComponente from './components/PrimeiroComponente.vue'
	import LifeCycle from './components/LifeCycle.vue'
	import Pessoa from './components/Pessoa.vue'
	import Info from './components/Info.vue'
	
	export default {
		name: 'App',
		components: {
			PrimeiroComponente,
			LifeCycle,
			Pessoa,
			Form,
			Info,
			Header
		},
		data() {
			return {
				testando: "Teste"
			}
		}
	}
</script>

<style>
	body {
		background-color: #333;
		color: #FFF;
	}
</style>