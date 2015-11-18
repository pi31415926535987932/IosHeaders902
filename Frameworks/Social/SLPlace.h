/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLPlace : NSObject <MKAnnotation, NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	NSURL* _pictureURL;
	NSString* _category;
	double _latitude;
	double _longitude;
	double _distance;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_SL1 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (retain) NSURL * pictureURL;                                 //@synthesize pictureURL=_pictureURL - In the implementation block
@property (retain) NSString * category;                                //@synthesize category=_category - In the implementation block
@property (assign) double latitude;                                    //@synthesize latitude=_latitude - In the implementation block
@property (assign) double longitude;                                   //@synthesize longitude=_longitude - In the implementation block
@property (assign) double distance;                                    //@synthesize distance=_distance - In the implementation block
+(char)supportsSecureCoding;
-(SCD_Struct_SL1)coordinate;
-(double)latitude;
-(double)longitude;
-(id)encodableProperties;
-(NSURL *)pictureURL;
-(void)setPictureURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)distance;
-(void)setDistance:(double)arg1 ;
@end

