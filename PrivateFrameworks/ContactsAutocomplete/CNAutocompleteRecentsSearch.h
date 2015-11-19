/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CRRecentContactsLibrary, NSString;

@interface CNAutocompleteRecentsSearch : NSObject <CNAutocompleteSearch> {

	CRRecentContactsLibrary* _library;

}

@property (nonatomic,retain) CRRecentContactsLibrary * library;              //@synthesize library=_library - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CRRecentContactsLibrary *)library;
-(void)setLibrary:(CRRecentContactsLibrary *)arg1 ;
-(id)init;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoreRecentContactsLibrary:(id)arg1 ;
-(id)findRecentContactsWithString:(id)arg1 domain:(id)arg2 fetchContext:(id)arg3 kinds:(id)arg4 groupThreshold:(unsigned)arg5 error:(id*)arg6 ;
-(/*^block*/id)resultTransformWithFactory:(id)arg1 membersFactory:(id)arg2 chosenAddressHashes:(id)arg3 searchString:(id)arg4 ;
-(id)groupAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5 ;
-(id)contactAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 completesChosenGroup:(char)arg3 ;
-(id)autocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5 ;
@end

