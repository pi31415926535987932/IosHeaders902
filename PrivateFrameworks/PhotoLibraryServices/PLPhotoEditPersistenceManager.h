/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoEditPersistenceManager : NSObject

@property (nonatomic,readonly) NSString * latestFormatIdentifier; 
@property (nonatomic,readonly) NSString * latestFormatVersion; 
-(char)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(int)arg5 ;
-(id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned)arg2 imageHeight:(unsigned)arg3 exifOrientation:(int)arg4 ;
-(NSString *)latestFormatIdentifier;
-(NSString *)latestFormatVersion;
-(char)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
-(id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 ;
-(id)_allConverterClasses;
-(Class)_latestExporterClass;
-(id)_allImporterClasses;
-(id)debugDescriptionForAdjustmentData:(id)arg1 ;
@end

