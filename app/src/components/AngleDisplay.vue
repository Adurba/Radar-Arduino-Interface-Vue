<template>
    <MixinAngleDisplay :chart-data="datacollection" class="col-xl-12"></MixinAngleDisplay>
</template>

<script>
import MixinAngleDisplay from '../mixins/MixinAngleDisplay'

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
  },
  methods: {
    fillData () {
      this.datacollection = {
        labels: ['Speed', 'Blank'],
        datasets: [
          {
            label: ['Speed', 'Blank'],
            backgroundColor: ['#A8201A', '#001427'],
            borderColor: '#001427',
            data: [this.getRandomInt(), this.getRandomInt()]
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

</style>
