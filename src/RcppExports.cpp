// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcppAlongTrack
NumericVector rcppAlongTrack(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo, NumericVector pointLat, NumericVector pointLon, double tolerance, double earthRadius);
RcppExport SEXP spatial_data_table_rcppAlongTrack(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP, SEXP pointLatSEXP, SEXP pointLonSEXP, SEXP toleranceSEXP, SEXP earthRadiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointLat(pointLatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointLon(pointLonSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< double >::type earthRadius(earthRadiusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppAlongTrack(latFrom, lonFrom, latTo, lonTo, pointLat, pointLon, tolerance, earthRadius));
    return rcpp_result_gen;
END_RCPP
}
// rcppDist2gc
NumericVector rcppDist2gc(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo, NumericVector pointLat, NumericVector pointLon, double tolerance, double earthRadius);
RcppExport SEXP spatial_data_table_rcppDist2gc(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP, SEXP pointLatSEXP, SEXP pointLonSEXP, SEXP toleranceSEXP, SEXP earthRadiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointLat(pointLatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointLon(pointLonSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< double >::type earthRadius(earthRadiusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDist2gc(latFrom, lonFrom, latTo, lonTo, pointLat, pointLon, tolerance, earthRadius));
    return rcpp_result_gen;
END_RCPP
}
// rcppDestination
Rcpp::List rcppDestination(NumericVector latFrom, NumericVector lonFrom, NumericVector distance, NumericVector bearing, double earthRadius);
RcppExport SEXP spatial_data_table_rcppDestination(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP distanceSEXP, SEXP bearingSEXP, SEXP earthRadiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bearing(bearingSEXP);
    Rcpp::traits::input_parameter< double >::type earthRadius(earthRadiusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDestination(latFrom, lonFrom, distance, bearing, earthRadius));
    return rcpp_result_gen;
END_RCPP
}
// rcppMidpoint
Rcpp::List rcppMidpoint(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo);
RcppExport SEXP spatial_data_table_rcppMidpoint(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppMidpoint(latFrom, lonFrom, latTo, lonTo));
    return rcpp_result_gen;
END_RCPP
}
// rcppBearing
NumericVector rcppBearing(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo, bool compassBearing);
RcppExport SEXP spatial_data_table_rcppBearing(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP, SEXP compassBearingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    Rcpp::traits::input_parameter< bool >::type compassBearing(compassBearingSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppBearing(latFrom, lonFrom, latTo, lonTo, compassBearing));
    return rcpp_result_gen;
END_RCPP
}
// rcppDistanceHaversine
NumericVector rcppDistanceHaversine(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo, double earthRadius, double tolerance);
RcppExport SEXP spatial_data_table_rcppDistanceHaversine(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP, SEXP earthRadiusSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    Rcpp::traits::input_parameter< double >::type earthRadius(earthRadiusSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDistanceHaversine(latFrom, lonFrom, latTo, lonTo, earthRadius, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// rcppDistanceCosine
NumericVector rcppDistanceCosine(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo, double earthRadius);
RcppExport SEXP spatial_data_table_rcppDistanceCosine(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP, SEXP earthRadiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    Rcpp::traits::input_parameter< double >::type earthRadius(earthRadiusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDistanceCosine(latFrom, lonFrom, latTo, lonTo, earthRadius));
    return rcpp_result_gen;
END_RCPP
}
// rcppDistanceEuclidean
NumericVector rcppDistanceEuclidean(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo);
RcppExport SEXP spatial_data_table_rcppDistanceEuclidean(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDistanceEuclidean(latFrom, lonFrom, latTo, lonTo));
    return rcpp_result_gen;
END_RCPP
}
// rcppClosePolygon
Rcpp::NumericVector rcppClosePolygon(Rcpp::NumericVector polyVector);
RcppExport SEXP spatial_data_table_rcppClosePolygon(SEXP polyVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type polyVector(polyVectorSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppClosePolygon(polyVector));
    return rcpp_result_gen;
END_RCPP
}
// rcppIsPolygonClosed
bool rcppIsPolygonClosed(double startX, double endX, double startY, double endY);
RcppExport SEXP spatial_data_table_rcppIsPolygonClosed(SEXP startXSEXP, SEXP endXSEXP, SEXP startYSEXP, SEXP endYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type startX(startXSEXP);
    Rcpp::traits::input_parameter< double >::type endX(endXSEXP);
    Rcpp::traits::input_parameter< double >::type startY(startYSEXP);
    Rcpp::traits::input_parameter< double >::type endY(endYSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppIsPolygonClosed(startX, endX, startY, endY));
    return rcpp_result_gen;
END_RCPP
}
// rcppPointsInPolygon
NumericVector rcppPointsInPolygon(NumericVector pointsId, NumericVector pointsX, NumericVector pointsY, NumericVector vectorX, NumericVector vectorY);
RcppExport SEXP spatial_data_table_rcppPointsInPolygon(SEXP pointsIdSEXP, SEXP pointsXSEXP, SEXP pointsYSEXP, SEXP vectorXSEXP, SEXP vectorYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pointsId(pointsIdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointsX(pointsXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointsY(pointsYSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectorX(vectorXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectorY(vectorYSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppPointsInPolygon(pointsId, pointsX, pointsY, vectorX, vectorY));
    return rcpp_result_gen;
END_RCPP
}
// rcppWindingNumber
double rcppWindingNumber(double pointX, double pointY, NumericVector vectorX, NumericVector vectorY);
RcppExport SEXP spatial_data_table_rcppWindingNumber(SEXP pointXSEXP, SEXP pointYSEXP, SEXP vectorXSEXP, SEXP vectorYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pointX(pointXSEXP);
    Rcpp::traits::input_parameter< double >::type pointY(pointYSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectorX(vectorXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectorY(vectorYSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppWindingNumber(pointX, pointY, vectorX, vectorY));
    return rcpp_result_gen;
END_RCPP
}
// rcppDouglasPeucker
Rcpp::StringVector rcppDouglasPeucker(Rcpp::StringVector polyline, double distanceTolerance);
RcppExport SEXP spatial_data_table_rcppDouglasPeucker(SEXP polylineSEXP, SEXP distanceToleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type polyline(polylineSEXP);
    Rcpp::traits::input_parameter< double >::type distanceTolerance(distanceToleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDouglasPeucker(polyline, distanceTolerance));
    return rcpp_result_gen;
END_RCPP
}
// rcppSimplifyPolyline
Rcpp::StringVector rcppSimplifyPolyline(Rcpp::StringVector polyline, double distanceTolerance, double tolerance, double earthRadius);
RcppExport SEXP spatial_data_table_rcppSimplifyPolyline(SEXP polylineSEXP, SEXP distanceToleranceSEXP, SEXP toleranceSEXP, SEXP earthRadiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type polyline(polylineSEXP);
    Rcpp::traits::input_parameter< double >::type distanceTolerance(distanceToleranceSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< double >::type earthRadius(earthRadiusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppSimplifyPolyline(polyline, distanceTolerance, tolerance, earthRadius));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_decode_pl
DataFrame rcpp_decode_pl(std::string encoded);
RcppExport SEXP spatial_data_table_rcpp_decode_pl(SEXP encodedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type encoded(encodedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_decode_pl(encoded));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_encode_pl
Rcpp::String rcpp_encode_pl(Rcpp::NumericVector latitude, Rcpp::NumericVector longitude, int num_coords);
RcppExport SEXP spatial_data_table_rcpp_encode_pl(SEXP latitudeSEXP, SEXP longitudeSEXP, SEXP num_coordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type latitude(latitudeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type longitude(longitudeSEXP);
    Rcpp::traits::input_parameter< int >::type num_coords(num_coordsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_encode_pl(latitude, longitude, num_coords));
    return rcpp_result_gen;
END_RCPP
}
