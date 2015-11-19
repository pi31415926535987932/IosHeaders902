/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SGSuggestionsServiceInternalProtocol <_SGSuggestionsServiceBaseProtocol>
@required
-(char)sendRTCLogs:(id*)arg1;
-(char)drainBothQueuesCompletely:(id*)arg1;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned)arg3 withCompletion:(/*^block*/id)arg4;
-(void)allContactsLimitedTo:(unsigned)arg1 withCompletion:(/*^block*/id)arg2;
-(char)removeAllStoredPseudoContacts:(id*)arg1;
-(void)drainBothQueuesCompletelyWithCompletion:(/*^block*/id)arg1;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned)arg3 options:(unsigned)arg4 error:(id*)arg5;
-(void)removeAllStoredPseudoContactsWithCompletion:(/*^block*/id)arg1;
-(void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(/*^block*/id)arg6;
-(id)emailAddressIsSignificant:(id)arg1 error:(id*)arg2;
-(void)emailAddressIsSignificant:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)clearCachesFully:(char)arg1 withCompletion:(/*^block*/id)arg2;
-(void)suggestEventsInFutureLimitTo:(unsigned)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3;
-(id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned)arg4 options:(unsigned)arg5 withCompletion:(/*^block*/id)arg6;
-(void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(/*^block*/id)arg6;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned)arg3 error:(id*)arg4;
-(char)clearCachesFully:(char)arg1 error:(id*)arg2;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned)arg4 withCompletion:(/*^block*/id)arg5;
-(id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned)arg3 error:(id*)arg4;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned)arg4 options:(unsigned)arg5 error:(id*)arg6;
-(void)resetConfirmationAndRejectionHistoryWithCompletion:(/*^block*/id)arg1;
-(id)suggestEventsInFutureLimitTo:(unsigned)arg1 options:(unsigned)arg2 error:(id*)arg3;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5;
-(void)suggestEventsInFutureLimitTo:(unsigned)arg1 withCompletion:(/*^block*/id)arg2;
-(char)resetConfirmationAndRejectionHistory:(id*)arg1;
-(void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned)arg3 withCompletion:(/*^block*/id)arg4;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned)arg4 error:(id*)arg5;
-(id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
-(char)addSearchableItems:(id)arg1 error:(id*)arg2;
-(id)allContactsLimitedTo:(unsigned)arg1 error:(id*)arg2;
-(id)suggestEventsInFutureLimitTo:(unsigned)arg1 error:(id*)arg2;
-(void)addSearchableItems:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end
