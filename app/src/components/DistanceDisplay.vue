<template>
<div>
  <h2>Distance-Display</h2>
    <MixinDistanceDisplay :chart-data="datacollection"></MixinDistanceDisplay>
</div>
</template>

<script>
import MixinDistanceDisplay from '../mixins/MixinDistanceDisplay'
import axios from 'axios'
export default {
  components: {
    MixinDistanceDisplay
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
    setInterval(() => {
      this.getData()
    }, 100)
  },

  methods: {
    fillData () {
      this.datacollection = {
        labels: ['Distance', 'Blank'],
        datasets: [
          {
            label: ['Distance', 'Blank'],
            backgroundColor: ['#A8201A', '#001427'],
            borderColor: '#001427',
            data: [this.x, 180 - this.x]
          }
        ]
      }
    },
    getRandomInt () {
      return Math.floor(Math.random() * (50 - 5 + 1)) + 5
    },
    getData () {
      axios.get('http://localhost:3003')
        .then(res => {
          this.x = res.data
        })
    }
  }
}
</script>

<style>
h2 {
  margin: 40px;
}
</style>
