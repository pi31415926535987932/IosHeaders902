/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:28 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/GEOMapItemPrivate.h>

@class GEOPlace, GEOPDPlace, GEOMapItemClientAttributes, NSData, NSArray, GEOPDFlyover, NSString, NSURL, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOMapItemAttribution, GEOFeatureStyleAttributes, GEOPDBusinessClaim, VKLabelMarker, GEOMapRegion, GEOAddress, NSDictionary, NSTimeZone, NSDate;

@interface _MKLabelMarkerItem : NSObject <GEOMapItemPrivate> {

	VKLabelMarker* _labelMarker;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSData * encodedData; 
@property (getter=isDisputed,nonatomic,readonly) char disputed; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK1 centerCoordinate; 
@property (nonatomic,readonly) int referenceFrame; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (nonatomic,readonly) GEOAddress * geoAddress; 
@property (nonatomic,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,readonly) NSArray * areasOfInterest; 
@property (nonatomic,readonly) NSTimeZone * timezone; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegionOrNil; 
@property (nonatomic,readonly) int contactAddressType; 
@property (nonatomic,readonly) NSString * contactName; 
@property (nonatomic,readonly) NSString * contactSpokenName; 
@property (nonatomic,readonly) char contactIsMe; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) char isEventAllDay; 
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) char hasResolvablePartialInformation; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_addressGeocodeAccuracy,nonatomic,readonly) int addressGeocodeAccuracy; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasResultProviderID,nonatomic,readonly) char hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_hasTransit,nonatomic,readonly) char hasTransit; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOMapItemTransitAttribution> transitAttribution; 
@property (getter=_hasFlyover,nonatomic,readonly) char hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_hasMUID,nonatomic,readonly) char hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) char hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) char hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) char hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) char hasAnyAmenities; 
@property (getter=_hasDeliveryAmenity,nonatomic,readonly) char hasDeliveryAmenity; 
@property (getter=_hasDelivery,nonatomic,readonly) char hasDelivery; 
@property (getter=_hasGoodForKidsAmenity,nonatomic,readonly) char hasGoodForKidsAmenity; 
@property (getter=_goodForKids,nonatomic,readonly) char goodForKids; 
@property (getter=_hasTakesReservationsAmenity,nonatomic,readonly) char hasTakesReservationsAmenity; 
@property (getter=_takesReservations,nonatomic,readonly) char takesReservations; 
@property (getter=_hasAcceptsApplePayAmenity,nonatomic,readonly) char hasAcceptsApplePayAmenity; 
@property (getter=_acceptsApplePay,nonatomic,readonly) char acceptsApplePay; 
@property (getter=_hasOperatingHours,nonatomic,readonly) char hasOperatingHours; 
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) char hasCurrentOperatingHours; 
@property (getter=_operatingHours,nonatomic,readonly) NSArray * operatingHours; 
@property (getter=_hasTelephone,nonatomic,readonly) char hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_hasTextBlock,nonatomic,readonly) char hasTextBlock; 
@property (getter=_textBlockTitle,nonatomic,readonly) NSString * textBlockTitle; 
@property (getter=_textBlockText,nonatomic,readonly) NSString * textBlockText; 
@property (getter=_hasPairOfFactoids,nonatomic,readonly) char hasPairOfFactoids; 
@property (getter=_factoids,nonatomic,readonly) NSArray * factoids; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned openingHoursOptions; 
@property (getter=_needsAttribution,nonatomic,readonly) char needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_encyclopedicAttribution,nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) char hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (getter=_resultSnippetLocationString,nonatomic,readonly) NSString * resultSnippetLocationString; 
@property (getter=_resultSnippetDistanceDisplayThreshold,nonatomic,readonly) unsigned resultSnippetDistanceDisplayThreshold; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_photos,nonatomic,readonly) NSArray * photos; 
+(id)labelMarkerItemWithLabelMarker:(id)arg1 ;
-(id)_transitAttributionSummaries;
-(id)initWithLabelMarker:(id)arg1 ;
-(void)loadTransitAttributionDetails:(/*^block*/id)arg1 ;
-(SCD_Struct_MK1)coordinate;
-(NSString *)name;
-(char)isValid;
-(id)_roadAccessPoints;
-(NSTimeZone *)timezone;
-(GEOMapRegion *)displayMapRegion;
-(unsigned long long)_muid;
-(int)referenceFrame;
-(id)_telephone;
-(id)_photos;
-(id)_styleAttributes;
-(char)isDisputed;
-(int)_addressGeocodeAccuracy;
-(id)_place;
-(char)isEventAllDay;
-(NSDate *)eventDate;
-(NSString *)eventName;
-(SCD_Struct_MK1)centerCoordinate;
-(id)_operatingHours;
-(id)_reviews;
-(NSString *)contactSpokenName;
-(char)_hasTakesReservationsAmenity;
-(char)contactIsMe;
-(char)_takesReservations;
-(NSString *)contactName;
-(char)_hasAcceptsApplePayAmenity;
-(char)_acceptsApplePay;
-(id)_arrivalMapRegionForTransportType:(int)arg1 ;
-(unsigned)_travelDistanceForTransportType:(int)arg1 ;
-(char)_hasOperatingHours;
-(char)_hasCurrentOperatingHours;
-(unsigned)_travelTimeForTransportType:(int)arg1 ;
-(char)_hasPriceRange;
-(unsigned)_priceRange;
-(GEOAddress *)geoAddress;
-(char)_hasAnyAmenities;
-(char)_hasDeliveryAmenity;
-(id)_asPlaceInfo;
-(char)_hasDelivery;
-(GEOMapRegion *)displayMapRegionOrNil;
-(int)contactAddressType;
-(char)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(NSArray *)areasOfInterest;
-(char)_hasGoodForKidsAmenity;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(char)_goodForKids;
-(id)_businessURL;
-(char)_hasUserRatingScore;
-(NSData *)encodedData;
-(unsigned)_sampleSizeForUserRatingScore;
-(GEOMapRegion *)geoFenceMapRegion;
-(id)_poiSurveyURLString;
-(unsigned)_resultSnippetDistanceDisplayThreshold;
-(char)_hasTravelTimeForTransportType:(int)arg1 ;
-(char)_hasMUID;
-(int)_recommendedTransportType;
-(id)_resultSnippetLocationString;
-(char)_hasAreaInMeters;
-(id)spokenNameForLocale:(id)arg1 ;
-(double)_areaInMeters;
-(id)_spokenAddressForLocale:(id)arg1 ;
-(id)_transitInfo;
-(char)_hasTransit;
-(unsigned long long)_customIconID;
-(int)_resultProviderID;
-(char)_hasResultProviderID;
-(char)_hasBusinessClaim;
-(id)_additionalPlaceInfos;
-(id)_businessClaim;
-(float)_normalizedUserRatingScore;
-(id)_flyoverAnnouncementMessage;
-(id)_attribution;
-(id)_photosAttribution;
-(id)_flyover;
-(char)_hasFlyover;
-(id)_reviewsAttribution;
-(id)_encyclopedicAttribution;
-(id)_transitAttribution;
-(NSDictionary *)addressDictionary;
-(id)_clientAttributes;
-(id)_urlForPhotoWithUID:(id)arg1 ;
-(id)_disambiguationName;
-(char)_needsAttribution;
-(id)_placeData;
-(unsigned)_openingHoursOptions;
-(id)_webURL;
-(id)_mapItemByStrippingOptionalData;
-(id)_vendorID;
-(id)_providerURL;
-(int)_placeType;
-(char)_hasTelephone;
-(char)_hasResolvablePartialInformation;
-(char)_hasTextBlock;
-(id)_textBlockText;
-(id)_textBlockTitle;
-(id)_placeDataAsData;
-(id)_urlForWritingAReview;
-(id)_factoids;
-(id)_urlForReview:(id)arg1 ;
-(char)_hasPairOfFactoids;
@end

