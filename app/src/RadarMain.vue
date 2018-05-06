<template>
  <div id="RadarMain">
    <div class="container-fluid">
      <div class="row col-xl-12 title">
        <h1 class="col-xl-12 text-center">Arduino-Radar Interface</h1>
      </div>
      <div class="row col-xl-12  ">
        <DataView class="col-xl-8"></DataView>
        <div class="col-xl-4 ">
          <div class="row">
            <AngleDisplay class="col-xl-12 angle-display"></AngleDisplay>
          </div>
        </div>
      </div>
     </div>
  </div>
</template>

<script>
import DataView from './components/DataView'
import AngleDisplay from './components/AngleDisplay'

export default {
  name: 'RadarMain',
  components: {
    DataView,
    AngleDisplay
  }
}
</script>
<style>
body {
  background-color: #001427;
  color: #FDFFFF;
}
h1 {
  margin-top: 50px;
  display: block;
}
@media screen and (max-width:1200px) {
  .angle-display {
    display: none;
  }
}
@media screen and (max-width:550px) {
  .title {
    padding-bottom:50px;
  }
}
</style>
