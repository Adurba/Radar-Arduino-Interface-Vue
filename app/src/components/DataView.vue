<template>
  <div class="small">
    <div class="row ">
          <div class="col-xl-12 label">
            <h2>Radar-Graph</h2>
          </div>
   </div>
   <MixinDataView :chart-data="datacollection"></MixinDataView>
  </div>
</template>

<script>
import MixinDataView from '../mixins/MixinDataView'

export default {
  name: 'React',
  components: {
    MixinDataView
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
            backgroundColor: '#28CC9E',
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
