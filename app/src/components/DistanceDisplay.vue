<template>
  <div class="DistanceDisplay">
      <div class="row  ">
          <div class="col-xl-12 label">
            <h2>Distance-Display</h2>
          </div>
        </div>
        <div class="row">
            <Chart class="col-xl-12"></Chart>
        </div>
     </div>
</template>

<script>
import Chart from './Chart'

export default {
  name: 'DistanceDisplay',
  components: {
    Chart
  }
}
</script>

<style scoped>
.DistanceDisplay {
  border: 1px solid black;
  border-radius:2%;
}
img {
  width: 95%;
  margin: auto;
}
</style>
