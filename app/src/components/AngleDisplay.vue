<template>
  <div class="AngleDisplay">
      <div class="row ">
          <div class="col-xl-12">
            <h2>Angle-Display</h2>
          </div>
        </div>
        <div class="row">
            <Doughnut class="col-xl-12"></Doughnut>
        </div>
     </div>
</template>

<script>
import Doughnut from './Doughnut'

export default {
  name: 'AngleDisplay',
  components: {
    Doughnut
  }
}
</script>

<style scoped>

</style>
