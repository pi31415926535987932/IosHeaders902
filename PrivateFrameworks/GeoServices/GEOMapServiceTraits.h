/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, GEOLocation, GEOMapRegion, GEOTraitsTransitScheduleFilter;

@interface GEOMapServiceTraits : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionId;
	SCD_Struct_GE1* _transportTypes;
	double _carHeadunitPixelHeight;
	double _carHeadunitPixelWidth;
	double _mapZoomLevel;
	int _action;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	int _carHeadunitInteractionModel;
	NSString* _carHeadunitManufacturer;
	NSString* _carHeadunitModel;
	int _deviceBatteryState;
	NSMutableArray* _deviceDisplayLanguages;
	int _deviceInterfaceOrientation;
	NSString* _deviceKeyboardLocale;
	GEOLocation* _deviceLocation;
	NSString* _deviceSpokenLocale;
	NSString* _displayRegion;
	GEOMapRegion* _mapRegion;
	int _mode;
	NSMutableArray* _photoSizes;
	unsigned _photosCount;
	NSString* _providerID;
	NSMutableArray* _reviewUserPhotoSizes;
	unsigned _reviewUserPhotosCount;
	unsigned _sequenceNumber;
	int _source;
	unsigned _timeSinceMapEnteredForeground;
	unsigned _timeSinceMapViewportChanged;
	GEOTraitsTransitScheduleFilter* _transitScheduleFilter;
	char _isAPICall;
	SCD_Struct_GE230 _has;

}

@property (assign,nonatomic) char hasSessionId; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionId;                                            //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                                             //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) char hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier;                                            //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) char hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;                                          //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) char hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;                                          //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
@property (nonatomic,readonly) char hasDeviceLocation; 
@property (nonatomic,retain) GEOLocation * deviceLocation;                                        //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,readonly) unsigned transportTypesCount; 
@property (nonatomic,readonly) int* transportTypes; 
@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                            //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceDisplayLanguages;                             //@synthesize deviceDisplayLanguages=_deviceDisplayLanguages - In the implementation block
@property (nonatomic,readonly) char hasDeviceKeyboardLocale; 
@property (nonatomic,retain) NSString * deviceKeyboardLocale;                                     //@synthesize deviceKeyboardLocale=_deviceKeyboardLocale - In the implementation block
@property (nonatomic,readonly) char hasDeviceSpokenLocale; 
@property (nonatomic,retain) NSString * deviceSpokenLocale;                                       //@synthesize deviceSpokenLocale=_deviceSpokenLocale - In the implementation block
@property (assign,nonatomic) char hasIsAPICall; 
@property (assign,nonatomic) char isAPICall;                                                      //@synthesize isAPICall=_isAPICall - In the implementation block
@property (assign,nonatomic) char hasSource; 
@property (assign,nonatomic) int source;                                                          //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoSizes;                                         //@synthesize photoSizes=_photoSizes - In the implementation block
@property (assign,nonatomic) char hasPhotosCount; 
@property (assign,nonatomic) unsigned photosCount;                                                //@synthesize photosCount=_photosCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * reviewUserPhotoSizes;                               //@synthesize reviewUserPhotoSizes=_reviewUserPhotoSizes - In the implementation block
@property (assign,nonatomic) char hasReviewUserPhotosCount; 
@property (assign,nonatomic) unsigned reviewUserPhotosCount;                                      //@synthesize reviewUserPhotosCount=_reviewUserPhotosCount - In the implementation block
@property (assign,nonatomic) char hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground;                              //@synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground - In the implementation block
@property (assign,nonatomic) char hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) unsigned timeSinceMapViewportChanged;                                //@synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged - In the implementation block
@property (assign,nonatomic) char hasAction; 
@property (assign,nonatomic) int action;                                                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) char hasCarHeadunitInteractionModel; 
@property (assign,nonatomic) int carHeadunitInteractionModel;                                     //@synthesize carHeadunitInteractionModel=_carHeadunitInteractionModel - In the implementation block
@property (nonatomic,readonly) char hasCarHeadunitManufacturer; 
@property (nonatomic,retain) NSString * carHeadunitManufacturer;                                  //@synthesize carHeadunitManufacturer=_carHeadunitManufacturer - In the implementation block
@property (nonatomic,readonly) char hasCarHeadunitModel; 
@property (nonatomic,retain) NSString * carHeadunitModel;                                         //@synthesize carHeadunitModel=_carHeadunitModel - In the implementation block
@property (assign,nonatomic) char hasCarHeadunitPixelWidth; 
@property (assign,nonatomic) double carHeadunitPixelWidth;                                        //@synthesize carHeadunitPixelWidth=_carHeadunitPixelWidth - In the implementation block
@property (assign,nonatomic) char hasCarHeadunitPixelHeight; 
@property (assign,nonatomic) double carHeadunitPixelHeight;                                       //@synthesize carHeadunitPixelHeight=_carHeadunitPixelHeight - In the implementation block
@property (nonatomic,readonly) char hasTransitScheduleFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleFilter * transitScheduleFilter;              //@synthesize transitScheduleFilter=_transitScheduleFilter - In the implementation block
@property (assign,nonatomic) char hasMapZoomLevel; 
@property (assign,nonatomic) double mapZoomLevel;                                                 //@synthesize mapZoomLevel=_mapZoomLevel - In the implementation block
@property (assign,nonatomic) char hasMode; 
@property (assign,nonatomic) int mode;                                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) char hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                                            //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,readonly) char hasProviderID; 
@property (nonatomic,retain) NSString * providerID;                                               //@synthesize providerID=_providerID - In the implementation block
@property (assign,nonatomic) char hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation;                                      //@synthesize deviceInterfaceOrientation=_deviceInterfaceOrientation - In the implementation block
@property (assign,nonatomic) char hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState;                                              //@synthesize deviceBatteryState=_deviceBatteryState - In the implementation block
-(unsigned)photosCount;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)dictionaryRepresentation;
-(int)source;
-(void)setSource:(int)arg1 ;
-(void)setHasAction:(char)arg1 ;
-(char)hasAction;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasMapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setSessionId:(SCD_Struct_GE4)arg1 ;
-(void)setHasSessionId:(char)arg1 ;
-(char)hasSessionId;
-(SCD_Struct_GE4)sessionId;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(char)hasSequenceNumber;
-(unsigned)sequenceNumber;
-(void)setHasSequenceNumber:(char)arg1 ;
-(NSString *)displayRegion;
-(char)hasDisplayRegion;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(GEOLocation *)deviceLocation;
-(char)hasTimeSinceMapViewportChanged;
-(char)hasDeviceLocation;
-(void)setDeviceLocation:(GEOLocation *)arg1 ;
-(void)setHasTimeSinceMapViewportChanged:(char)arg1 ;
-(unsigned)timeSinceMapViewportChanged;
-(void)setTimeSinceMapViewportChanged:(unsigned)arg1 ;
-(unsigned)timeSinceMapEnteredForeground;
-(char)hasTimeSinceMapEnteredForeground;
-(void)setHasTimeSinceMapEnteredForeground:(char)arg1 ;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(NSString *)providerID;
-(void)setProviderID:(NSString *)arg1 ;
-(NSString *)appMajorVersion;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(char)hasAppMinorVersion;
-(char)hasAppMajorVersion;
-(NSString *)appMinorVersion;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(NSMutableArray *)photoSizes;
-(unsigned)photoSizesCount;
-(void)clearPhotoSizes;
-(char)hasSource;
-(void)setTransitScheduleFilter:(GEOTraitsTransitScheduleFilter *)arg1 ;
-(char)hasTransitScheduleFilter;
-(GEOTraitsTransitScheduleFilter *)transitScheduleFilter;
-(int)transportTypeAtIndex:(unsigned)arg1 ;
-(int*)transportTypes;
-(unsigned)transportTypesCount;
-(void)clearTransportTypes;
-(void)addTransportType:(int)arg1 ;
-(void)setTransportTypes:(int*)arg1 count:(unsigned)arg2 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(char)hasAppIdentifier;
-(void)setHasDeviceInterfaceOrientation:(char)arg1 ;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(void)setPhotoSizes:(NSMutableArray *)arg1 ;
-(char)isAPICall;
-(void)setIsAPICall:(char)arg1 ;
-(int)carHeadunitInteractionModel;
-(char)hasDeviceSpokenLocale;
-(char)hasDeviceInterfaceOrientation;
-(void)setCarHeadunitInteractionModel:(int)arg1 ;
-(char)hasDeviceKeyboardLocale;
-(NSString *)deviceSpokenLocale;
-(void)addDeviceDisplayLanguage:(id)arg1 ;
-(NSMutableArray *)reviewUserPhotoSizes;
-(void)setDeviceBatteryState:(int)arg1 ;
-(void)setHasCarHeadunitInteractionModel:(char)arg1 ;
-(id)photoSizesAtIndex:(unsigned)arg1 ;
-(void)clearDeviceDisplayLanguages;
-(char)hasCarHeadunitInteractionModel;
-(int)deviceBatteryState;
-(void)setReviewUserPhotoSizes:(NSMutableArray *)arg1 ;
-(void)setHasDeviceBatteryState:(char)arg1 ;
-(char)hasCarHeadunitManufacturer;
-(void)setHasMode:(char)arg1 ;
-(id)deviceDisplayLanguageAtIndex:(unsigned)arg1 ;
-(void)setHasSource:(char)arg1 ;
-(char)hasMode;
-(unsigned)reviewUserPhotoSizesCount;
-(NSMutableArray *)deviceDisplayLanguages;
-(void)setCarHeadunitModel:(NSString *)arg1 ;
-(char)hasProviderID;
-(NSString *)deviceKeyboardLocale;
-(char)hasIsAPICall;
-(int)deviceInterfaceOrientation;
-(void)clearReviewUserPhotoSizes;
-(void)setHasIsAPICall:(char)arg1 ;
-(char)hasCarHeadunitPixelHeight;
-(double)carHeadunitPixelHeight;
-(char)hasPhotosCount;
-(void)setMapZoomLevel:(double)arg1 ;
-(void)setHasPhotosCount:(char)arg1 ;
-(void)setHasMapZoomLevel:(char)arg1 ;
-(void)setPhotosCount:(unsigned)arg1 ;
-(void)setHasCarHeadunitPixelHeight:(char)arg1 ;
-(void)setDeviceDisplayLanguages:(NSMutableArray *)arg1 ;
-(char)hasMapZoomLevel;
-(double)mapZoomLevel;
-(char)hasCarHeadunitModel;
-(char)hasDeviceBatteryState;
-(void)setCarHeadunitPixelWidth:(double)arg1 ;
-(unsigned)deviceDisplayLanguagesCount;
-(void)setDeviceKeyboardLocale:(NSString *)arg1 ;
-(void)addPhotoSizes:(id)arg1 ;
-(void)setCarHeadunitManufacturer:(NSString *)arg1 ;
-(unsigned)reviewUserPhotosCount;
-(id)reviewUserPhotoSizesAtIndex:(unsigned)arg1 ;
-(NSString *)carHeadunitModel;
-(char)hasReviewUserPhotosCount;
-(void)setHasCarHeadunitPixelWidth:(char)arg1 ;
-(char)hasCarHeadunitPixelWidth;
-(double)carHeadunitPixelWidth;
-(void)addReviewUserPhotoSizes:(id)arg1 ;
-(void)setHasReviewUserPhotosCount:(char)arg1 ;
-(void)setCarHeadunitPixelHeight:(double)arg1 ;
-(void)setDeviceSpokenLocale:(NSString *)arg1 ;
-(NSString *)carHeadunitManufacturer;
-(void)setReviewUserPhotosCount:(unsigned)arg1 ;
-(int)uiActionType;
-(char)readFrom:(id)arg1 ;
@end

