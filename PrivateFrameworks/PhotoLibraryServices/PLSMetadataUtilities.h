/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLSMetadataUtilities : NSObject
+(void)_writeData:(id)arg1 toFile:(id)arg2 ;
+(id)_allAlbumsInPhotoLibrary:(id)arg1 ;
+(id)_detailsForAsset:(id)arg1 includingLocal:(char)arg2 includingFingerprints:(char)arg3 ;
+(void)_writeJSONForAssets:(id)arg1 toFile:(id)arg2 ;
+(char)_writeDetails:(id)arg1 forEntityNamed:(id)arg2 toFilepath:(id)arg3 withDefaultFilename:(id)arg4 ;
+(id)_detailsForAlbum:(id)arg1 ;
+(id)_nameForAdjustmentType:(int)arg1 ;
+(id)allAssetsDetailsWriteToPath:(id)arg1 includingLocal:(char)arg2 includingFingerprints:(char)arg3 forAlbumTitled:(id)arg4 ;
+(id)allAlbumsDetailsWriteToPath:(id)arg1 ;
@end

