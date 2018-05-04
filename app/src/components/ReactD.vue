<template>
<div class="AngleDisplay">
      <div class="row ">
          <div class="col-xl-12">
            <h2>Angle-Display</h2>
          </div>
        </div>
        <div class="row">
    <RenderD :chart-data="datacollection" class="col-xl-12"></RenderD>
        </div>
     </div>
</template>

<script>
import RenderD from './RenderD'

export default {
  components: {
    RenderD
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
.small {
  max-width: 600px;
  margin: 150px auto;
}
</style>
