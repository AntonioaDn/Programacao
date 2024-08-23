<template>
	<div>
		<!-- <PrimeiroComponente/> -->
		<!-- <p>O valor de testando é {{ testando }}</p> -->
		<LifeCycle/>
		<!-- <Pessoa/> -->
		<Form/>
		<Info/>
		<Picture/>
	</div>
</template>

<script>
	import Picture from './components/Picture.vue'
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
			Picture
		},
		data() {
			return {
				testando: "Teste"
			}
		}
	}
</script>
