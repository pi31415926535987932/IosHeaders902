/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ASLocation : ASItem <NSCoding> {

	NSString* _displayName;
	NSString* _annotation;
	NSString* _street;
	NSString* _city;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _latitude;
	NSString* _longitude;
	NSString* _accuracy;
	NSString* _altitude;
	NSString* _altitudeAccuracy;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * annotation;                    //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) NSString * street;                        //@synthesize street=_street - In the implementation block
@property (nonatomic,retain) NSString * city;                          //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSString * state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * postalCode;                    //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,retain) NSString * country;                       //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * latitude;                      //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSString * longitude;                     //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSString * accuracy;                      //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,retain) NSString * altitude;                      //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,retain) NSString * altitudeAccuracy;              //@synthesize altitudeAccuracy=_altitudeAccuracy - In the implementation block
+(id)locationWithCalLocation:(void*)arg1 ;
-(NSString *)city;
-(char)isEqualToLocation:(id)arg1 ;
-(void)setAccuracy:(NSString *)arg1 ;
-(NSString *)latitude;
-(NSString *)longitude;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)annotation;
-(void)setAnnotation:(NSString *)arg1 ;
-(char)isEmptyLocation;
-(id)initWithApplicationData:(id)arg1 ;
-(NSString *)altitudeAccuracy;
-(id)initWithCalLocation:(void*)arg1 ;
-(void)setAltitudeAccuracy:(NSString *)arg1 ;
-(void)setAltitude:(NSString *)arg1 ;
-(NSString *)altitude;
-(NSString *)accuracy;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)street;
-(void)setStreet:(NSString *)arg1 ;
-(void)setLatitude:(NSString *)arg1 ;
-(void)setLongitude:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)postalCode;
@end

