<template>
    <div>
        <h2>Meu formulário:</h2>
        <form action="">
            <InputText/>
            <InputText/>
            <Submit/>
        </form>
    </div>
</template>

<script>
    import InputText from './form/InputText.vue'
    import Submit from './form/Submit.vue'

    export default {
        name: "Form",
        components: {
            InputText,
            Submit
        }
    }
</script>
