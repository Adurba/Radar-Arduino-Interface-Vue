<template>
  <div class="DataView">
        <div class="row ">
          <div class="col-xl-12 label">
            <h2>Radar-Graph</h2>
          </div>
          <Chart class="col-xl-12"></Chart>
        </div>
      </div>
</template>

<script>
import Chart from './Chart'

export default {
  name: 'DataView',
  components: {
    Chart
  }
}
</script>

<style scoped>

</style>
