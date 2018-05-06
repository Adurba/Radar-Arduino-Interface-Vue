<template>
<div>
  <h2>Data-View</h2>
  <MixinDataView :chart-data="datacollection" class="render"></MixinDataView>
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
#line-chart{
  height: 600px !important;
}
</style>
