<template>
  <div class="AngleDisplay">
      <div class="row ">
          <div class="col-xl-12">
            <h2>Angle-Display</h2>
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
  name: 'AngleDisplay',
  components: {
    Chart
  }
}
</script>

<style scoped>

</style>
