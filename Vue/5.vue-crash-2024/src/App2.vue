<script setup>
  import { ref, onMounted } from 'vue'

  const name = ref('Antonio Dantas')
  const status = ref('active')
  const tasks = ref(['task one', 'task two', 'task three'])
  const newTask = ref('')

  const toggleStatus = () => {
    if (status.value === 'active') {
      status.value = 'pending'
    } else if (status.value === 'pending') {
      status.value = 'inactive'
    } else {
      status.value = 'active'
    }
  }

  const addTask = () => {
      if (newTask.value !== '') {
        tasks.value.push(newTask.value)
        newTask.value = ''
      }
  }

  const deleteTask = (index) => {
    tasks.value.splice(index, 1)
  }

  onMounted(async () => {
    try {
      const response = await fetch('https://jsonplaceholder.typicode.com/todos')
      const data = await response.json()
      tasks.value = data.map((task) => task.title)
    } catch (error) {
      alert('Error fetching tasks')
    }
  })
  
</script>

<template>
  <h1>{{ name }}</h1>
  <p v-if="status === 'active'">User is active</p>
  <p v-else-if="status === 'pending'">User is pending</p>
  <p v-else>User is inactive</p>  
  <button @click="toggleStatus()">ToggleStatus</button>

  <form @submit.prevent="addTask">
    <label for="newTask">Add task</label>
    <input type="text" id="newTask" name="newTask" v-model="newTask">
    <button type="submit">Enviar!</button>
  </form>
  
  <h3>tasks</h3>
  <ul>
    <li v-for="(task, index) in tasks" :key="index">
      <span>
        {{ task }}
      </span>
      <button @click="deleteTask(index)">x</button>
    </li>
  </ul>
</template>

<style>
</style>