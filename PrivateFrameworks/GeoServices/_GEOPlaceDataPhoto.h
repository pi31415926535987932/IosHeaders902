/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemPhoto.h>

@class GEOPDPhoto, GEOPhoto, NSString, NSURL;

@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto> {

	GEOPDPhoto* _photo;
	GEOPhoto* _geoPhoto;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * author; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * licenseDescription; 
@property (nonatomic,readonly) NSURL * licenseURL; 
@property (nonatomic,readonly) char displayFullPhotoInline; 
@property (nonatomic,readonly) GEOPhoto * geoPhoto;                        //@synthesize geoPhoto=_geoPhoto - In the implementation block
-(id)initWithPhoto:(id)arg1 ;
-(void)dealloc;
-(char)displayFullPhotoInline;
-(NSString *)caption;
-(NSString *)licenseDescription;
-(NSURL *)licenseURL;
-(GEOPhoto *)geoPhoto;
-(NSString *)author;
@end
