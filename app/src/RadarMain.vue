<template>
  <div id="RadarMain">
    <DataView/>
    <AngleDisplay/>
    <DistanceDisplay/>
    <SpeedDisplay/>      
  </div>
</template>

<script>
import DataView from './components/DataView'
import AngleDisplay from './components/AngleDisplay'
import DistanceDisplay from './components/DistanceDisplay'
import SpeedDisplay from './components/SpeedDisplay'


export default {
  name: 'RadarMain',
  components: {
    DataView,
    AngleDisplay,
    DistanceDisplay,
    SpeedDisplay
  }
}
</script>

<style>

</style>