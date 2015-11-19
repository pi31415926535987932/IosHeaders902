/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString;

@interface JaliscoUpdateGeniusDataOperation : CloudLibraryOperation <NSURLSessionTaskDelegate> {

	char _initialImport;
	int _geniusOperationStatus;

}

@property (assign,getter=isInitialImport,nonatomic) char initialImport;              //@synthesize initialImport=_initialImport - In the implementation block
@property (nonatomic,readonly) int geniusOperationStatus;                            //@synthesize geniusOperationStatus=_geniusOperationStatus - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInitialImport:(char)arg1 ;
-(void)_updateGeniusData;
-(void)_prepareMetadataPayloadWithCUID:(id)arg1 ;
-(void)_determineUploadURLWithCUID:(id)arg1 numberOfItems:(unsigned)arg2 ;
-(void)_uploadMetadataWithCUID:(id)arg1 toURL:(id)arg2 updateID:(id)arg3 ;
-(id)_itemsToUpload;
-(void)_determineResultsURLWhenReadyWithCUID:(id)arg1 updateID:(id)arg2 ;
-(void)_downloadSimDataFromURL:(id)arg1 additionalFieldsFromURL:(id)arg2 ;
-(id)_simDataDestinationPathURL;
-(id)_additionalFieldsDestinationPathURL;
-(void)_importGeniusData;
-(int)geniusOperationStatus;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(char)isInitialImport;
-(id)init;
-(void)main;
@end

