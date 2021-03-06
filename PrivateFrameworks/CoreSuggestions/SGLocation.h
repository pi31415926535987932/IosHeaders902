/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGObject.h>
#import <libobjc.A.dylib/SGEventLocationForGeocode.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface SGLocation : SGObject <SGEventLocationForGeocode, NSCopying, NSSecureCoding> {

	unsigned _locationType;
	NSString* _label;
	NSString* _address;
	NSData* _handle;
	double _latitude;
	double _longitude;
	double _accuracy;
	double _quality;

}

@property (nonatomic,readonly) unsigned locationType;                        //@synthesize locationType=_locationType - In the implementation block
@property (nonatomic,readonly) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * address;                           //@synthesize address=_address - In the implementation block
@property (getter=isGeocoded,nonatomic,readonly) char geocoded; 
@property (nonatomic,readonly) double latitude;                              //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                             //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double accuracy;                              //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) double quality;                               //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) NSData * handle;                              //@synthesize handle=_handle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(char)isEqualToLocation:(id)arg1 ;
-(NSData *)handle;
-(NSString *)address;
-(double)latitude;
-(double)longitude;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(int)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned)arg3 label:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 accuracy:(double)arg7 quality:(double)arg8 ;
-(id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned)arg3 label:(id)arg4 address:(id)arg5 accuracy:(double)arg6 quality:(double)arg7 ;
-(char)isGeocoded;
-(id)initWithLocation:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 handle:(id)arg5 ;
-(char)geocodeIsStart;
-(id)geocodeAddress;
-(char)geocodeIsEnd;
-(double)geocodeLatitude;
-(id)geocodeLabel;
-(double)geocodeLongitude;
-(double)geocodeAccuracy;
-(id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned)arg3 label:(id)arg4 address:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 accuracy:(double)arg8 quality:(double)arg9 handle:(id)arg10 ;
-(id)geocodeHandle;
-(id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4 ;
-(double)accuracy;
-(unsigned)locationType;
-(double)quality;
@end

