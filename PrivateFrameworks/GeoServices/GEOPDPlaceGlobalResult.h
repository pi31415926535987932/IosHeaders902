/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteResult, GEOPDBatchPopularNearbySearchResult, GEOPDSearchBrowseCategorySuggestionResult, GEOPDCanonicalLocationSearchResult, GEOPDCategorySearchResult, GEOPDGeocodingResult, GEOPDLocationDirectedSearchResult, GEOPDMerchantLookupResult, GEOPDNearbySearchResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDPopularNearbySearchResult, GEOPDReverseGeocodingResult, GEOPDSearchFieldPlaceholderResult, GEOPDSearchResult, GEOPDSearchZeroKeywordCategorySuggestionResult, GEOPDSiriSearchResult, GEOPDVendorSpecificPlaceRefinementResult;

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying> {

	GEOPDAutocompleteResult* _autocompleteResult;
	GEOPDBatchPopularNearbySearchResult* _batchPopularNearbySearchResult;
	GEOPDSearchBrowseCategorySuggestionResult* _browseCategorySuggestionResult;
	GEOPDCanonicalLocationSearchResult* _canonicalSearchResult;
	GEOPDCategorySearchResult* _categorySearchResult;
	GEOPDGeocodingResult* _geocodingResult;
	GEOPDLocationDirectedSearchResult* _locationDirectedSearchResult;
	GEOPDMerchantLookupResult* _merchantLookupResult;
	GEOPDNearbySearchResult* _nearbySearchResult;
	GEOPDPlaceLookupResult* _placeLookupResult;
	GEOPDPlaceRefinementResult* _placeRefinementResult;
	GEOPDPopularNearbySearchResult* _popularNearbySearchResult;
	GEOPDReverseGeocodingResult* _reverseGeocodingResult;
	GEOPDSearchFieldPlaceholderResult* _searchFieldPlaceholderResult;
	GEOPDSearchResult* _searchResult;
	GEOPDSearchZeroKeywordCategorySuggestionResult* _searchZeroKeywordCategorySuggestionResult;
	GEOPDSiriSearchResult* _siriSearchResult;
	GEOPDVendorSpecificPlaceRefinementResult* _vendorSpecificPlaceRefinementResult;

}

@property (nonatomic,readonly) char hasSearchResult; 
@property (nonatomic,retain) GEOPDSearchResult * searchResult;                                                                        //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) char hasGeocodingResult; 
@property (nonatomic,retain) GEOPDGeocodingResult * geocodingResult;                                                                  //@synthesize geocodingResult=_geocodingResult - In the implementation block
@property (nonatomic,readonly) char hasCanonicalSearchResult; 
@property (nonatomic,retain) GEOPDCanonicalLocationSearchResult * canonicalSearchResult;                                              //@synthesize canonicalSearchResult=_canonicalSearchResult - In the implementation block
@property (nonatomic,readonly) char hasReverseGeocodingResult; 
@property (nonatomic,retain) GEOPDReverseGeocodingResult * reverseGeocodingResult;                                                    //@synthesize reverseGeocodingResult=_reverseGeocodingResult - In the implementation block
@property (nonatomic,readonly) char hasPlaceLookupResult; 
@property (nonatomic,retain) GEOPDPlaceLookupResult * placeLookupResult;                                                              //@synthesize placeLookupResult=_placeLookupResult - In the implementation block
@property (nonatomic,readonly) char hasMerchantLookupResult; 
@property (nonatomic,retain) GEOPDMerchantLookupResult * merchantLookupResult;                                                        //@synthesize merchantLookupResult=_merchantLookupResult - In the implementation block
@property (nonatomic,readonly) char hasPlaceRefinementResult; 
@property (nonatomic,retain) GEOPDPlaceRefinementResult * placeRefinementResult;                                                      //@synthesize placeRefinementResult=_placeRefinementResult - In the implementation block
@property (nonatomic,readonly) char hasSiriSearchResult; 
@property (nonatomic,retain) GEOPDSiriSearchResult * siriSearchResult;                                                                //@synthesize siriSearchResult=_siriSearchResult - In the implementation block
@property (nonatomic,readonly) char hasLocationDirectedSearchResult; 
@property (nonatomic,retain) GEOPDLocationDirectedSearchResult * locationDirectedSearchResult;                                        //@synthesize locationDirectedSearchResult=_locationDirectedSearchResult - In the implementation block
@property (nonatomic,readonly) char hasAutocompleteResult; 
@property (nonatomic,retain) GEOPDAutocompleteResult * autocompleteResult;                                                            //@synthesize autocompleteResult=_autocompleteResult - In the implementation block
@property (nonatomic,readonly) char hasBrowseCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionResult * browseCategorySuggestionResult;                              //@synthesize browseCategorySuggestionResult=_browseCategorySuggestionResult - In the implementation block
@property (nonatomic,readonly) char hasCategorySearchResult; 
@property (nonatomic,retain) GEOPDCategorySearchResult * categorySearchResult;                                                        //@synthesize categorySearchResult=_categorySearchResult - In the implementation block
@property (nonatomic,readonly) char hasPopularNearbySearchResult; 
@property (nonatomic,retain) GEOPDPopularNearbySearchResult * popularNearbySearchResult;                                              //@synthesize popularNearbySearchResult=_popularNearbySearchResult - In the implementation block
@property (nonatomic,readonly) char hasSearchZeroKeywordCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordCategorySuggestionResult * searchZeroKeywordCategorySuggestionResult;              //@synthesize searchZeroKeywordCategorySuggestionResult=_searchZeroKeywordCategorySuggestionResult - In the implementation block
@property (nonatomic,readonly) char hasSearchFieldPlaceholderResult; 
@property (nonatomic,retain) GEOPDSearchFieldPlaceholderResult * searchFieldPlaceholderResult;                                        //@synthesize searchFieldPlaceholderResult=_searchFieldPlaceholderResult - In the implementation block
@property (nonatomic,readonly) char hasBatchPopularNearbySearchResult; 
@property (nonatomic,retain) GEOPDBatchPopularNearbySearchResult * batchPopularNearbySearchResult;                                    //@synthesize batchPopularNearbySearchResult=_batchPopularNearbySearchResult - In the implementation block
@property (nonatomic,readonly) char hasVendorSpecificPlaceRefinementResult; 
@property (nonatomic,retain) GEOPDVendorSpecificPlaceRefinementResult * vendorSpecificPlaceRefinementResult;                          //@synthesize vendorSpecificPlaceRefinementResult=_vendorSpecificPlaceRefinementResult - In the implementation block
@property (nonatomic,readonly) char hasNearbySearchResult; 
@property (nonatomic,retain) GEOPDNearbySearchResult * nearbySearchResult;                                                            //@synthesize nearbySearchResult=_nearbySearchResult - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPopularNearbySearchResult:(GEOPDPopularNearbySearchResult *)arg1 ;
-(char)hasSiriSearchResult;
-(GEOPDPlaceLookupResult *)placeLookupResult;
-(void)setBatchPopularNearbySearchResult:(GEOPDBatchPopularNearbySearchResult *)arg1 ;
-(GEOPDSearchZeroKeywordCategorySuggestionResult *)searchZeroKeywordCategorySuggestionResult;
-(void)setNearbySearchResult:(GEOPDNearbySearchResult *)arg1 ;
-(void)setBrowseCategorySuggestionResult:(GEOPDSearchBrowseCategorySuggestionResult *)arg1 ;
-(char)hasLocationDirectedSearchResult;
-(void)setSearchZeroKeywordCategorySuggestionResult:(GEOPDSearchZeroKeywordCategorySuggestionResult *)arg1 ;
-(GEOPDMerchantLookupResult *)merchantLookupResult;
-(void)setCategorySearchResult:(GEOPDCategorySearchResult *)arg1 ;
-(GEOPDSearchFieldPlaceholderResult *)searchFieldPlaceholderResult;
-(char)hasAutocompleteResult;
-(void)setPlaceRefinementResult:(GEOPDPlaceRefinementResult *)arg1 ;
-(void)setSiriSearchResult:(GEOPDSiriSearchResult *)arg1 ;
-(char)hasPlaceLookupResult;
-(GEOPDCanonicalLocationSearchResult *)canonicalSearchResult;
-(GEOPDCategorySearchResult *)categorySearchResult;
-(void)setVendorSpecificPlaceRefinementResult:(GEOPDVendorSpecificPlaceRefinementResult *)arg1 ;
-(char)hasMerchantLookupResult;
-(char)hasVendorSpecificPlaceRefinementResult;
-(void)setReverseGeocodingResult:(GEOPDReverseGeocodingResult *)arg1 ;
-(char)hasNearbySearchResult;
-(GEOPDPopularNearbySearchResult *)popularNearbySearchResult;
-(GEOPDReverseGeocodingResult *)reverseGeocodingResult;
-(void)setSearchResult:(GEOPDSearchResult *)arg1 ;
-(char)hasPlaceRefinementResult;
-(char)hasGeocodingResult;
-(char)hasSearchZeroKeywordCategorySuggestionResult;
-(GEOPDSearchResult *)searchResult;
-(void)setLocationDirectedSearchResult:(GEOPDLocationDirectedSearchResult *)arg1 ;
-(void)setPlaceLookupResult:(GEOPDPlaceLookupResult *)arg1 ;
-(char)hasCanonicalSearchResult;
-(GEOPDLocationDirectedSearchResult *)locationDirectedSearchResult;
-(void)setGeocodingResult:(GEOPDGeocodingResult *)arg1 ;
-(GEOPDSearchBrowseCategorySuggestionResult *)browseCategorySuggestionResult;
-(GEOPDNearbySearchResult *)nearbySearchResult;
-(char)hasSearchFieldPlaceholderResult;
-(GEOPDGeocodingResult *)geocodingResult;
-(char)hasReverseGeocodingResult;
-(char)hasBatchPopularNearbySearchResult;
-(GEOPDAutocompleteResult *)autocompleteResult;
-(char)hasBrowseCategorySuggestionResult;
-(GEOPDVendorSpecificPlaceRefinementResult *)vendorSpecificPlaceRefinementResult;
-(void)setMerchantLookupResult:(GEOPDMerchantLookupResult *)arg1 ;
-(GEOPDPlaceRefinementResult *)placeRefinementResult;
-(void)setSearchFieldPlaceholderResult:(GEOPDSearchFieldPlaceholderResult *)arg1 ;
-(char)hasSearchResult;
-(void)setAutocompleteResult:(GEOPDAutocompleteResult *)arg1 ;
-(char)hasCategorySearchResult;
-(void)setCanonicalSearchResult:(GEOPDCanonicalLocationSearchResult *)arg1 ;
-(GEOPDBatchPopularNearbySearchResult *)batchPopularNearbySearchResult;
-(GEOPDSiriSearchResult *)siriSearchResult;
-(char)hasPopularNearbySearchResult;
-(char)readFrom:(id)arg1 ;
@end

