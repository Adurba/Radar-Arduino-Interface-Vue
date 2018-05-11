<template>
<div>
  <h2>Angle-Display</h2>
    <MixinAngleDisplay :chart-data="datacollection"></MixinAngleDisplay>
</div>
</template>

<script>
import MixinAngleDisplay from '../mixins/MixinAngleDisplay'
import axios from 'axios'
var x = 5
export default {
  components: {
    MixinAngleDisplay
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
        labels: ['Speed', 'Blank'],
        datasets: [
          {
            label: ['Angle', 'Blank'],
            backgroundColor: ['#A8201A', '#001427'],
            borderColor: '#001427',
            data: [this.x,180-this.x]
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
