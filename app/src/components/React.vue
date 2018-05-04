<template>
  <div class="small">
    <div class="row ">
          <div class="col-xl-12 label">
            <h2>Radar-Graph</h2>
          </div>
    <Render :chart-data="datacollection"></Render>
   </div>
  </div>
</template>

<script>
import Render from './Render'

export default {
  name: 'React',
  components: {
    Render
  },
  data () {
    return {
      datacollection: null
    }
  },
  mounted () {
    setInterval(() => {
      this.fillData()
    }, 100)
  },
  methods: {
    fillData () {
      this.datacollection = {
        labels: ['1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'],
        datasets: [
          {
            label: 'Data One',
            backgroundColor: 'red',
            data: [this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt(), this.getRandomInt()]
          }
        ]
      }
    },
    getRandomInt () {
      return Math.floor(Math.random() * (50 - 5 + 1)) + 5
    }
  }
}
</script>

<style>
.small {
  max-width: 600px;
  margin: 150px auto;
}
</style>
